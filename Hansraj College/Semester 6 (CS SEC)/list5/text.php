<?php
echo "<h1><center>Thanks For shopping!</center></h1><br>";

echo "<ul>";
if (isset($_POST['name'])) $name = $_POST['name'];
 else $name = "(Not entered)";
echo "<li>Your name $name </li>";

$mail = $_POST['mail'];
echo "<li>Email address $mail </li>";
echo "</ul>";

if (isset($_POST['cont'])) $cont = $_POST['cont'];
 else $cont = "(Not entered)";
echo "<li>Your Contact: $cont</li>";

$gen = $_POST['Gender'];
if ($gen == 'Male') echo "<li>Gender: $gen</li>";
else echo "<li>Gender: $gen</li>";


if (isset($_POST['quan'])) $quan = $_POST['quan'];
 else $quan = "(Not entered)";
echo "<li>Quantity you ordered $quan </li>";


if(isset($_POST['color']))
    $selected_color= $_POST['color'];
else $selected_color = "(Not entered)";
echo "<li>Color code is $selected_color</li>";


if(isset($_POST['con']))
    $content = $_POST['con'];
else $content = $_POST['con'];
echo "<li>You need";
foreach($content as $a)
{
    echo " $a ". " ";
}
echo "</li>";


if([isset($_POST['slo'])])
    $slogan = $_POST['slo'];
else $slogan = "(Not Entered)";
echo "<li> SLOGAN -- $slogan </li>";


if(isset($_POST['submit']) && isset($_FILES['photo']))
{
    echo "Hello";
}

if([isset($_POST['size'])])
    $size = $_POST['size'];
else $size = "(Not Entered)";
echo "<li>Size for T- Shirt-- $size </li>";


if([isset($_POST['add'])])
    $address = $_POST['add'];
    else $address = "(Not Enetered)";
echo "<li>Address-- $address</li>";


if([isset($_POST['mop'])])
    $mop = $_POST['mop'];
    else $mop = "(NOt Entered)";
echo "<li>Mode of Payment Choosen -- ";
if($mop == "Cash On Delivery")
{
    echo "Cash on delivery ";
}
elseif($mop == "UPI")
{
    echo "UPI";
} 
else
{
    echo "Net Banking";
}
echo "</li>";







?>