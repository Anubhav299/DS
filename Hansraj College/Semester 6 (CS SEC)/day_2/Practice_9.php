<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result_Practice_9</title>
</head>
<body>
    <?php
    $num=$_POST["num"];
    echo "Factors of $num are: ";
    factors($num);
    function factors($num){
    for ($i=1;$i<=$num;$i++){
        if ($num%$i==0) echo "$i ";
    }
}
    ?>
</table>
</body>
</html>