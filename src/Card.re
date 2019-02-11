let component = ReasonReact.statelessComponent("Card");

let handleClick = (_event, _self) => Js.log("clicked!");


let make = (~name, _children) => {
    ...component,
render: _self =>
    <div>
      <h3 onClick={_self.handle(handleClick)}>
        {ReasonReact.string("Sample data will be here -->"++name)}  
      </h3>
    </div>,    
};