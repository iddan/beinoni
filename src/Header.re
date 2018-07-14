let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <header>
      <a href="/about-membership">
        (ReasonReact.string({js|אודות מנוי|js}))
      </a>
      <h1> (ReasonReact.string({js|בינוני|js})) </h1>
      <aside>
        <button> (ReasonReact.string({js|התחבר|js})) </button>
        <button> (ReasonReact.string({js|התחל|js})) </button>
      </aside>
    </header>,
};