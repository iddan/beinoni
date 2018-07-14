[%bs.raw {|require('./App.css')|}];

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div className="App">
      <header>
        <a href="/about-membership">
          (ReasonReact.string({js|אודות מנוי|js}))
        </a>
        <h1> (ReasonReact.string({js|אמצעי|js})) </h1>
        <aside>
          <button className="login">
            (ReasonReact.string({js|התחבר|js}))
          </button>
          <button className="sign-up">
            (ReasonReact.string({js|התחל|js}))
          </button>
        </aside>
      </header>
      <main> <Post /> </main>
      <footer>
        <aside style=(ReactDOMRe.Style.make(~marginRight="auto", ()))>
          <AlefAlefAlefLogo />
        </aside>
      </footer>
    </div>,
};