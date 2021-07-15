console.log("This is module")

function average(arr) {
    let sum = 0;
    arr.forEach(element => {
        sum += element;
    })
    return sum / arr.length;
}

// module.exports = average;
module.exports = {
    avg: average,
    name: "Arnab",
    repo: "github"
}

//Note-> module.exports is itself an object