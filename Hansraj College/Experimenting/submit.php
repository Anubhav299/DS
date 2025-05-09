<!DOCTYPE html>
<html>
<head>
	<title>Submitted Data</title>
</head>
<body>
	<h1>Submitted Data</h1>
	<?php
		$name = $_POST['name'];
		$email = $_POST['email'];
		$password = $_POST['password'];
		$gender = $_POST['gender'];
		$message = $_POST['message'];

		echo "<p>Name: $name</p>";
		echo "<p>Email: $email</p>";
		echo "<p>Password: $password</p>";
		echo "<p>Gender: $gender</p>";
		echo "<p>Message: $message</p>";
	?>
</body>
</html>
