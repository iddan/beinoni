open ReactMarkdown;

type state = {content: option(string)};

type action =
  | SetContent(option(string));

let component = ReasonReact.reducerComponent("Post");

let make = (~url: string, _children) => {
  ...component,
  initialState: () => {content: None},
  reducer: (action, state) =>
    switch (action) {
    | SetContent(content) => ReasonReact.Update({...state, content})
    },
  didMount: _self => {
    let _ =
      Js.Promise.(
        Fetch.fetch(url)
        |> then_(Fetch.Response.text)
        |> then_(content => {
             _self.send(SetContent(Some(content)));
             resolve(content);
           })
      );
    ();
  },
  render: _self => {
    let contentNode =
      switch (_self.state.content) {
      | Some(content) => <Markdown source=content />
      | None => <div> (ReasonReact.string("LOADING")) </div>
      };
    <article> contentNode </article>;
  },
};