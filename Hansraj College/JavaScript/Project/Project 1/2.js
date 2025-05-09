// Define an array to hold the list of expenses
let expenses = [];

// Define an array to hold the list of friends
let friends = [];

// Define a function to add a new expense
function addExpense(amount, description, date) {
  // Create a new expense object
  const expense = {
    amount,
    description,
    date
  };
  
  // Add the new expense to the array
  expenses.push(expense);
  
  // Update the expense list
  const expenseList = document.getElementById('expense-list');
  
  // Create a new list item to hold the expense details
  const expenseListItem = document.createElement('li');
  
  // Add the expense amount to the list item
  const amountSpan = document.createElement('span');
  amountSpan.textContent = amount;
  expenseListItem.appendChild(amountSpan);
  
  // Add the expense description to the list item
  const descriptionSpan = document.createElement('span');
  descriptionSpan.textContent = description;
  expenseListItem.appendChild(descriptionSpan);
  
  // Add the expense date to the list item
  const dateSpan = document.createElement('span');
  dateSpan.textContent = date;
  expenseListItem.appendChild(dateSpan);
  
  // Add the new list item to the expense list
  expenseList.appendChild(expenseListItem);
}

// Define a function to add a new friend
function addFriend(name) {
  // Create a new friend object
  const friend = {
    name,
    share: 0
  };
  
  // Add the new friend to the array
  friends.push(friend);
  
  // Update the friend table
  const friendTable = document.getElementById('friend-table');
  
  // Create a new table row to hold the friend details
  const tableRow = document.createElement('tr');
  
  // Add a cell for the friend's name
  const nameCell = document.createElement('td');
  nameCell.textContent = name;
  tableRow.appendChild(nameCell);
  
  // Add a cell for the friend's share
  const shareCell = document.createElement('td');
  shareCell.textContent = friend.share;
  tableRow.appendChild(shareCell);
  
  // Add the new row to the friend table
  friendTable.appendChild(tableRow);
}

// Define a function to split the expenses among the friends
function splitExpenses() {
  // Calculate the total expense amount
  const totalExpense = expenses.reduce((total, expense) => total + expense.amount, 0);
  
  // Calculate the share for each friend
  friends.forEach(friend => {
    friend.share = expenses.reduce((share, expense) => {
      return share + (expense.amount / friends.length);
    }, 0);
  });
  
  // Update the friend table
  const friendTable = document.getElementById('friend-table');
  
  // Loop through the table rows and update the share cell for each friend
  friendTable.querySelectorAll('tr').forEach((tableRow, index) => {
    const shareCell = tableRow.querySelector('td:nth-of-type(2)');
    shareCell.textContent = friends[index].share;
  });
}

// Test the functions
addExpense(10.50, 'Coffee', '2023-04-18');
addExpense(20.00, 'Lunch', '2023-04-17');
addFriend('Alice');
addFriend('Bob');
addFriend('Charlie');
splitExpenses();
