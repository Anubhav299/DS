<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form</title>
    <style>
        table{
            border: 1px black solid;
            width: 100%;

        }
        td{
            border: 1px black solid;
            padding: 2%;
        }
        input{
            margin: 1%;
            width: 100%;
        }
    </style>
</head>
<body>
        <form action="form.php" method="post">
            <table>
                <tr>
                <h2><center>Student Data Form</center></h2>
                <?php
                for ($i=1;$i<6;$i++){
                echo "<td>";
                echo "<h3>Student". $i."</h3>";
                echo  "<label for='name_".$i."'>Name:</label><br>";
                echo  "<input type='text' name='name_".$i."' id='name_".$i."'><br>";
                echo  "<label for='roll_number_".$i."'>Roll Number</label><br>";
                echo  "<input type='number' name='roll_number_".$i."' id='roll_number_".$i."'><br>";
                echo  "<label for='Physics_".$i."'>Marks in Physics</label><br>";
                echo  "<input type='number' min='0' max='100' name='Physics_".$i."' id='Physics_".$i."'><br>";
                echo  "<label for='Chemistry_".$i."'>Marks in Chemistry</label><br>";
                echo  "<input type='number' min='0' max='100' name='Chemistry_".$i."' id='Chemistry_".$i."'><br>";
                echo  "<label for='Maths_".$i."'>Marks in Maths</label><br>";
                echo  "<input type='number' min='0' max='100' name='Maths_".$i."' id='Maths_".$i."'><br>";
                echo "</td>";
                };
                ?>
                </tr>
        </table>
        <center>
        <input type="submit" style="width:auto;">
        </center>
        </form>
</body>
</html>