var text = "";

for (var i = 1; i < 101; i++) {
	if (i % 3 == 0 && i % 5 == 0) { text += "FizzBuzz" + "<br>"; }
	else if (i % 3 == 0) { text += "Fizz" + "<br>"; }
	else if (i % 5 == 0) { text += "Buzz" + "<br>"; }
	else { text += i + "<br>"; }
}

console.log(text);