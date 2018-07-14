[%bs.raw {|require('./App.css')|}];

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div className="App">
      <Header />
      <main> <Post /> </main>
      <footer>
        <aside style=(ReactDOMRe.Style.make(~marginRight="auto", ()))>
          <AlefAlefAlefLogo />
        </aside>
      </footer>
    </div>,
};