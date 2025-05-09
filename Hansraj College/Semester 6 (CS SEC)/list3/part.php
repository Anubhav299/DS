<?php
$data = extract($_POST);
echo $data;
//////// Extract function is used to convert the array into variables using key terms 


////// EXTR_SKIP is used when we want to skip the array variable and want to use the externally defined variable

/////// EXTR_Overwrite is default and uses the newly defined value of array.

////////// if want to use both variable 'a' value and array 'a' value then we use EXTR_PREFIX_SAME and pass a prefix value for array usage

$a = 'tile';
$color = array('a'=>'red','b'=>'green','c'=>'blue');
extract($color,EXTR_PREFIX_SAME,"test");

echo "Value of variable a".$a;
echo "Value of array value of a".$test_a;


//////////// if we want that all the variables of array are called using prefix then use EXTR_PREFIX_ALL


/////////////////COMPACT FUNCTION is used to convert the variables into associative array
$ab = "goof";
$b = "tool";
$c = "pop";
$new = compact("ab","b","c");

print_r($new);

/// also arrays can be added along with variables

?>