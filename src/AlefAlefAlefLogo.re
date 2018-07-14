[@bs.module]
external alefAlefAlefLogo : string = "./images/alef-alef-alef-logo.svg";
[%bs.raw {|require('./AlefAlefAlefLogo.css')|}];

let component = ReasonReact.statelessComponent("AlefAlefAlefLogo");

let make = _children => {
  ...component,
  render: _self =>
    <a
      className="AlefAlefAlefLogo"
      href="https://alefalefalef.co.il"
      title={js|"אאא - בית לטיפוגרפיה עברית"|js}>
      (ReasonReact.string({js|פונטים|js}))
      <img src=alefAlefAlefLogo />
    </a>,
};