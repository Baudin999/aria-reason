/* State declaration */
type state = {message: string};

/* Component template declaration.
   Needs to be **after** state and action declarations! */
let component = ReasonReact.reducerComponent("Root");

/* greeting and children are props. `children` isn't used, therefore ignored.
   We ignore it by prepending it with an underscore */
let make = _children => {
  /* spread the other default fields of component here and override a few */
  ...component,

  initialState: () => {message: "Aria Sheet, the RE version"},

  /* State transitions */
  reducer: ((), _) => ReasonReact.NoUpdate,

  render: ({state: {message}}) => {
    <div className="root"> {Helpers.str(message)} </div>;
  },
};