const binarySearch = (t: number, sortedArr: Array<number>): boolean => {
    const middleIdx = Math.round((sortedArr.length - 1) / 2);
    const h = Math.ceil(sortedArr.length / 2);

    if (t > sortedArr[sortedArr.length - 1]) {
        return false;
    } else if (t === sortedArr[middleIdx]) {
        return true;
    } else if (t > sortedArr[middleIdx]) {
        return binarySearch(t, sortedArr.splice(-h));
    } else if (t < sortedArr[middleIdx]) {
        return binarySearch(t, sortedArr.splice(0, h));
    } 
};

const genArr = (l: number, arr: Array<number>): Array<number> => {
  for (let i = 0; i < l; i++) {
    arr.push(i);
  }

  return arr;
};

console.log(binarySearch(1000045, genArr(2000000, []))); // True
console.log(binarySearch(3000045, genArr(2000000, []))); // False
