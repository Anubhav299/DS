// Sample data for expenses
const expenses = [
  { description: 'Lunch', amount: 35 },
  { description: 'Dinner', amount: 80 },
  { description: 'Movie Tickets', amount: 50 }
];

// Function to calculate total expense amount
function getTotalExpenseAmount(expenses) {
  let totalAmount = 0;
  for (let i = 0; i < expenses.length; i++) {
    totalAmount += expenses[i].amount;
  }
  return totalAmount;
}

// Function to split expenses equally among users
function splitExpensesEqually(expenses, numUsers) {
  const totalAmount = getTotalExpenseAmount(expenses);
  const amountPerUser = totalAmount / numUsers;
  const result = [];
  for (let i = 0; i < numUsers; i++) {
    result.push(amountPerUser);
  }
  return result;
}

// Sample usage of the expense splitter
const numUsers = 3;
const splitAmounts = splitExpensesEqually(expenses, numUsers);
console.log(`Total expense amount: $${getTotalExpenseAmount(expenses)}`);
console.log(`Amount per user: $${splitAmounts[0]}`);
console.log(`Split amounts: $${splitAmounts.join(', $')}`);
