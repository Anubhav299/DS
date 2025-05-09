// Define an array of expenses
const expenses = [  { description: 'Lunch', amount: 35, payer: 'Alice', users: ['Alice', 'Bob', 'Charlie'] },
  { description: 'Dinner', amount: 80, payer: 'Bob', users: ['Alice', 'Bob', 'Charlie'] },
  { description: 'Movie Tickets', amount: 50, payer: 'Charlie', users: ['Alice', 'Bob', 'Charlie'] }
];

// Define an array of users
const users = ['Alice', 'Bob', 'Charlie'];

// Define a function to calculate the total amount owed by each user
function calculateAmountsOwed(expenses, users) {
  const amountsOwed = {};
  for (let i = 0; i < users.length; i++) {
    amountsOwed[users[i]] = 0;
  }
  for (let i = 0; i < expenses.length; i++) {
    const numUsers = expenses[i].users.length;
    const amountPerUser = expenses[i].amount / numUsers;
    amountsOwed[expenses[i].payer] -= expenses[i].amount;
    for (let j = 0; j < numUsers; j++) {
      amountsOwed[expenses[i].users[j]] += amountPerUser;
    }
  }
  return amountsOwed;
}

// Define a function to display the amounts owed by each user
function displayAmountsOwed(amountsOwed) {
  console.log('Amounts Owed:');
  for (let user in amountsOwed) {
    console.log(`${user}: $${amountsOwed[user].toFixed(2)}`);
  }
}

// Calculate and display the amounts owed by each user
const amountsOwed = calculateAmountsOwed(expenses, users);
displayAmountsOwed(amountsOwed);
