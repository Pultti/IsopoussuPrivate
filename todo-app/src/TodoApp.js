import React, { useState } from 'react';

function App() {
  // State to store the list of to-do items
  const [items, setItems] = useState([]);
  const [error, setError] = useState("");
  // Method to add a new item to the list
  const addItem = (item) => {
    if(item === "") {
      setError("Please enter a valid item");
      return;
    }
    setError("");
    setItems([...items, {name: item, isComplete: false}]);
  }
  console.log(items);
  // Method to mark an item as complete
  const markComplete = (index) => {
    const updatedItems = [...items];
    updatedItems[index].isComplete = true;
    setItems(updatedItems);
  }

  // Method to remove an item from the list
  const removeItem = (index) => {
    setItems(items.filter((item, i) => i !== index));
  }

  return (
    <div>
      <h1>To-Do List</h1>
      {error !== "" && <p style={{color: "red"}}>{error}</p>}
      <form onSubmit={e => {
        e.preventDefault();
        addItem(e.target.elements.todo.value);
        e.target.elements.todo.value = '';
      }}>
        <input type="text" placeholder="Add an item" name="todo"/>
        <button type="submit">Add</button>
      </form>
      <ul>
        {items.map((item, index) => (
          <li key={index}>
            <span style={{ textDecoration: item.isComplete ? 'line-through' : 'none' }}>
              {item.name}
            </span>
            <button onClick={() => markComplete(index)}>Complete</button>
            <button onClick={() => removeItem(index)}>Remove</button>
          </li>
        ))}
      </ul>
    </div>
  );
}

export default App;
