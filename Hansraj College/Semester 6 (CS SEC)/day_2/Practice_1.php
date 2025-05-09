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
    echo "For marks $marks you have got ".grades($marks);
    function grades($marks){
    if ($marks>=90) return "Grade A";
    elseif ($marks>=80) return "Grade B";
    elseif ($marks>=70) return "Grade C";
    elseif ($marks>=60) return "Grade D";
    elseif ($marks>=50) return "Grade E";
    else return "Failed!";}
    ?>
</body>
</html>