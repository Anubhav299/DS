// Initialize variables
let expenses = [];
let friends = [];

// Add expense function
function addExpense() {
  // Get user input values
  const expenseName = document.getElementById("expense-name").value;
  const expenseAmount = parseFloat(document.getElementById("expense-amount").value);
  const expenseDate = document.getElementById("expense-date").value;

  // Add expense to expenses array
  expenses.push({
    name: expenseName,
    amount: expenseAmount,
    date: expenseDate
  });

  // Update expense table
  const table = document.getElementById("expense-table");
  const row = table.insertRow();
  const nameCell = row.insertCell(0);
  const amountCell = row.insertCell(1);
  const dateCell = row.insertCell(2);
  nameCell.innerHTML = expenseName;
  amountCell.innerHTML = "$" + expenseAmount.toFixed(2);
  dateCell.innerHTML = expenseDate;

  // Clear input fields
  document.getElementById("expense-name").value = "";
  document.getElementById("expense-amount").value = "";
  document.getElementById("expense-date").value = "";
}

// Add friend function
function addFriend() {
  // Get friend name from input field
  const friendName = document.getElementById("friend-name").value;

  // Add friend to friends array
  friends.push(friendName);

  // Update friend list
  const list = document.getElementById("friend-list");
  const listItem = document.createElement("li");
  listItem.innerHTML = friendName;
  list.appendChild(listItem);

  // Clear input field
  document.getElementById("friend-name").value = "";
}

// Split expenses function
function splitExpenses() {
  // Calculate total expense amount
  const totalAmount = expenses.reduce((sum, expense) => sum + expense.amount, 0);

  // Calculate amount per friend
  const amountPerFriend = totalAmount / friends.length;

  // Create object to store amount owed by each friend
  const amountsOwed = {};

  // Loop through friends array and calculate amount owed by each friend
  friends.forEach(friend => {
    // Calculate total amount spent by friend
    const amountSpent = expenses.reduce((sum, expense) => {
      if (expense.name === friend) {
        return sum + expense.amount;
      } else {
        return sum;
      }
    }, 0);

    // Calculate amount owed by friend
    const amountOwed = amountPerFriend - amountSpent;

    // Store amount owed in amountsOwed object
    amountsOwed[friend] = amountOwed;
  });

  // Display amounts owed
  const list = document.getElementById("amounts-owed");
  list.innerHTML = "";
  Object.entries(amountsOwed).forEach(([friend, amountOwed]) => {
    const listItem = document.createElement("li");
    if (amountOwed > 0) {
      listItem.innerHTML = `${friend} owes $${amountOwed.toFixed(2)}`
    } else if (amountOwed < 0) {
      listItem.innerHTML = `${friend} is owed $${Math.abs(amountOwed).toFixed(2)}`
    } else {
      listItem.innerHTML = `${friend} is all square`
    }
    list.appendChild(listItem);
  });
}
