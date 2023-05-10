import React, { useState } from 'react';
import TodoApp from "../src/TodoApp";
import Lounasruletti from "../src/Lounasruletti";
import "./App.css";
function App() {
  return (
    <div className='container'>
      <TodoApp />
      <Lounasruletti />
    </div>
  );
}

export default App;
