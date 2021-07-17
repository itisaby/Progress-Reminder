// Very important one, kindly run it or look after it once 
const express = require('express');  // inserted express module 
const path = require('path')
const fs = require('fs')
const app = express();
const port = 3000;

// EXPRESS
app.use('/static', express.static('static')) // To serve static files 
app.use(express.urlencoded())

// PUG
app.set('view engine', 'pug')  // Setting template engine as pug
app.set('views', path.join(__dirname, 'views')); // Set the views directory 

// ENDPOINTS
app.get('/', (req, res) => {
    const con ="This is the best gym in Kolkata ";
    const para = {'title': 'Pug is Best', "content": con};
    res.status(200).render('index.pug', para);
})

// POST REQUEST
app.post('/', (req, res) => {
    // console.log(req.body);
    name = req.body.name;
    age = req.body.age;
    Gender = req.body.Gender;
    address = req.body.address;
    more = req.body.more;
    let output = `name is ${name} and age is ${age}years old, gender is${Gender}, address is ${address} and more is ${more}`;
    fs.writeFileSync('ouput.txt', output);

    const para = {'message': 'Your form has been submitted successfully'};
    res.status(200).render('index.pug', para);

})

// SERVER START
app.listen(port, () => {
    console.log(`The application started on port ${port}`)
})


