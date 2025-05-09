<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result_Practice_3</title>
</head>
<body>
    <?php
    $num=$_POST["num"];
    for ($i=$num;$i>0;$i--) 
    {
        static $fact=1;
        $fact=$fact*$i;
    }
    echo "Factorial of $num is $fact.";
?>
</table>
</body>
</html>