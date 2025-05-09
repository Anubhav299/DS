<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result_Practice_1</title>
</head>
<body>
    <?php
    $marks=$_POST['num'];
    echo "For marks $marks you have got ";
    if ($marks>=90) echo "Grade A";
    elseif ($marks>=80) echo "Grade B";
    elseif ($marks>=70) echo "Grade C";
    elseif ($marks>=60) echo "Grade D";
    elseif ($marks>=50) echo "Grade E";
    else echo "Failed!";
    ?>
</body>
</html>