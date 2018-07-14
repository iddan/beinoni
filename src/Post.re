let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self => <main> (ReasonReact.string("CONTENT")) </main>,
};