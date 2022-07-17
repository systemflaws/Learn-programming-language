/*
let myName = "Arun";
let age = 18;
console.log(myName);
console.log(age);

let $fun = "Javascript is \
 fun";
console.log($fun);

let isJavascriptFun = true;
console.log("Is Javascript fun?", '\t', isJavascriptFun);


let isJavascriptFun = true;
console.log(isJavascriptFun);
console.log(typeof isJavascriptFun);
console.log(typeof false);

isJavascriptFun = 'YES';
console.log(isJavascriptFun);
console.log(typeof isJavascriptFun);


console.log(null);
console.log(typeof null);

// NOT WORK
// console.log(year);
console.log(typeof year);

let date;
console.log(date);
console.log(typeof date);

console.log(typeof undefined);


let age = 30;
age = 31;
console.log(age);

const birthYear = 1998;
console.log(birthYear);
// ERROR
// birthYear = 1999;
// const Year;

var myName = "Arun Kumr SIngh";
console.log(myName);
myName = "Arun Kumar Singh";
console.log(myName);


id = 10;
console.log(id);


const currentYear = 2022;
const arunBirthYear = 1998;
const arunAge = currentYear - arunBirthYear;
const rajuBirthYear = 2013;
const rajuAge = currentYear - rajuBirthYear;
console.log("Arun age: ", arunAge, "\nRaju Age: ", rajuAge);

console.log(arunAge * 2, arunAge / 2, rajuAge * 3, rajuAge / 2, rajuAge ** 2);

const firstName = 'Netaji';
const lastName = 'Subhas';
console.log(firstName + ' ' + lastName);
let currentMoney = 1000;
currentMoney = currentMoney + 200; // 1200
currentMoney += 100;
console.log(currentMoney);


let savedMoney = 10;
savedMoney *= 2;
savedMoney++;
savedMoney--;
savedMoney--;

console.log(savedMoney);

console.log(arunAge >= rajuAge);

console.log(currentYear - arunBirthYear >= currentYear - rajuBirthYear);
*/

// Coding Challenge #1

/*
const marksMass = 95;
const marksHeight = 1.88;
const johnsMass = 85;
const johnsHeight = 1.76;

const marksBMI = (marksMass) / (marksHeight ** 2);
const johnsBMI = (johnsMass) / (johnsHeight * johnsHeight);
const markHigherBMI = (marksBMI > johnsBMI);

console.log(marksBMI, johnsBMI);
console.log(markHigherBMI);
*/

// Template literals
/*
const firstName = 'Arun';
const birthYear = 1999;
const job = 'unemployed';
const currentYear = 2022;

const about = "I'm " + firstName + ". I'm " + (currentYear-birthYear) + " year old " + job + "!";
console.log(about);

const aboutTemplateLiteral = `I'm ${firstName}. I'm ${currentYear - birthYear} year old ${job}!`;
console.log(aboutTemplateLiteral);

console.log(`I'm doing not well...`);

console.log("This is \nmultiline \ncomment \n");
console.log("This is \n\
multiline\n\
comment.")

console.log(`This is 
multiline
comment`);
*/

// if-else statement

/*
const age = 15;
// const legalAge = age >= 18;
// if(true){statement;}

if(age >= 18){
    console.log(`You can drive 🚗 or drink.🍷`);
}
else{
    console.log(`You can't drive and drink.`);
    const yearsLeft = 18 - age;
    console.log(`Wait ${yearsLeft} years.`);
}

const birthYear = 1998;
let century;
if(birthYear <= 2000){
    century = 20;
    console.log(century);
}
else{
    century = 21;
    console.log(century);
}
*/

// Coding Challenge #2
/*
const marksMass = 95;
const marksHeight = 1.88;
const johnsMass = 85;
const johnsHeight = 1.76;

const marksBMI = (marksMass) / (marksHeight ** 2);
const johnsBMI = (johnsMass) / (johnsHeight * johnsHeight);

if(marksBMI > johnsBMI){
    console.log(`Mark's BMI ${marksBMI.toFixed(2)} is higher than John's BMI ${johnsBMI.toFixed(2)}.`);
}
else{
    console.log(`John's BMI ${johnsBMI.toFixed(2)} is higher than Mark's BMI ${marksBMI.toFixed(2)}.`);
}
*/

/*
// Type Conversion: Do explicitly
const year = '1998';
console.log(year, Number(year));

console.log(year + 18); // Type Coercion
console.log(Number(year) + 18);

console.log(Number('arun'));

console.log(typeof NaN);

console.log(18);
console.log(String(18));

// Type Coercion: Do implicitly

console.log("Im" + 18 + "year old");
console.log("25" - "25" - 3);
console.log("25" * 2);
console.log(25 / "5");

let number = '25' + 1;
number--;
console.log(number);
// Can introduce bug
*/
