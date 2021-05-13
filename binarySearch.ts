const binarySearch = (t: number, sortedArr: Array<number>): boolean => {
    const middleIdx = Math.round((sortedArr.length - 1) / 2);
    const h = Math.ceil(sortedArr.length / 2);

    if (t === sortedArr[middleIdx]) {
        return true;
    } else if (t > sortedArr[middleIdx]) {
        return binarySearch(t, sortedArr.splice(-h));
    } else {
        return binarySearch(t, sortedArr.splice(0, h));
    }
};

const genArr = (l: number, arr: Array<number>): Array<number> => {
  for (let i = 0; i < l; i++) {
    arr.push(i);
  }

  return arr;
};

console.log(binarySearch(10000540, genArr(20000000, []))); 
