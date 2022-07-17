# Data Structure

## Array

An array is a data structure that can hold a collection of values.
Arrays can contain a mix of different data types. You can store strings, booleans, numbersor even objects all in the same array.
Arrays are resizable. You don't have to declare the size of an array before creating it.
JavaScript arrays are zero-indexed and the insertion order is maintained.
They are iterables. They can be iterate via "for of loop".

```
const arr = []; // initialization
console.log(typeof(arr));
for(const i of arr){
    console.log(i);
}  // looping
console.log(Array.isArray(arr)); // Check whether it is array or not.
```

Some Methods of Array

```
const arr = [1, 2, 'a', 'b', 2.4];
console.log('Initial array: ', ...arr);

console.log('length of array: ', arr.length);

console.log(arr[arr.length] = 'length', ...arr);

console.log("After using Unshift method: ");
arr.unshift(10);
console.log(...arr);

console.log("After using push method: ", arr.push('z'), ...arr);

console.log("After using shift method: ", arr.shift(), ...arr);

console.log("After using pop method: ", arr.pop(), ...arr);
```

ForEach function in Array

1. Use case to print array
2. Calculate Sum
3. Count appearance

```
const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

console.log(numbers)
numbers.forEach(func);

function func(item, index, arr){
    console.log('numbers['+index+'] = '+item);
}

// Arrow function

numbers.forEach((item, index, arr) => {
    console.log('numbers['+index+'] = '+item);
});

let sum = 0
numbers.forEach((item,index, arr) => {
    sum += item;
});
console.log(sum);
numbers.forEach(item => {
    sum += item;
});
console.log(sum);

letters = ['a', 'b', 'c', 'd', 'a', 'a', 'b', 'c', 'a'];
count = {}

letters.forEach(item => {
    if(count[item]){
        count[item]++;
    }
    else{
        count[item] = 1;
    }
});
console.log(count);
```

Important functions

1. Map
2. Filter
3. Reduce
4. Concat
5. Slice
6. Splice

Time Complexity:
|Operations|Time Complexity|
|---|---|
| push(), pop() | O(1) |
|unshift(), shift() | O(N)|
|access [] | O(1)|
|Searching |O(N) |
|concat(), splice(), slice() | O(N) |
|forEach(), map(), filter(), reduce() | O(N)|

## OBJECT

An object is an unordered collection of key-value pairs. The key must either be a string or symbol data type where as the value can of any data type.
To retrieve a value, you can use the corresponding key. This can be achieved using the dot notation or bracket notation.
An object is not an iterable. You cannot use it with "for of loop"

```
const obj = {
    name: 'Bruce',
    age: 25,
    'key-three': true,
    nameFunction: function(){
        console.log(this.name); // Here this is the obj
    }
};
console.log(obj);

obj.hobby = 'cricket';
console.log(obj);

console.log(obj.name);
console.log(obj['age']);
console.log(obj['key-three']);

delete obj.hobby;
console.log(obj);

obj.nameFunction();

console.log(Object.keys(obj))
console.log(Object.values(obj))
console.log(Object.entries(obj));
```

Important functions

1. keys
2. values
3. entrires

Time Complexity:
|Operations|Time Complexity|
|---|---|
| Insert, Remove,Access | O(1) |
|search | O(N)|
|keys, values, entries |O(N) |

## SET

A set is a data structure that can hold a values. The values must be unique.
Set can contain a mix of different data types. You can store strings, booleans, numbers or even objects all in the same array.
Sets are dynamically sized. You don't have to declare the size of a set before creating it.
Sets do not maintain insertion order.
Sets are iterable. They can be iterate via "for of loop"

Set vs Array
Sets can't contain duplicate values.
Sets do not maintain order.
Searching and Deletion an element in the set is faster compared to arrays.

```
const mySet = new Set([1, 2, 3, 4])

console.log(mySet);

mySet.add(4); // Already present will do nothing
mySet.add(100);

console.log(mySet.has(100));
console.log(mySet.has(5));

mySet.delete(4);

for(const item of mySet){
    console.log(item);
}

console.log('size', mySet.size);

mySet.clear();

console.log(mySet);
```
