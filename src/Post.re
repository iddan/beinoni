let component = ReasonReact.statelessComponent("Post");

let make = _children => {
  ...component,
  render: _self => <article> (ReasonReact.string("CONTENT")) </article>,
};