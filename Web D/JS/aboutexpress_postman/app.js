// Very important one, kindly run it or look after it once 
const express = require('express');  // inserted express module 
const path = require('path')
const app = express();                 
const port = 3000;

// To serve static files 
app.use('/static', express.static('static'))

// Setting template engine as pug
app.set('view engine', 'pug')

// Set the views directory 
app.set('views', path.join(__dirname, 'views'));

//Pug demo end point 
app.get('/demo', (req, res) => {
    res.status(200).render('demo', { title: 'Hey', message: 'Hello there! and thanks a lot ' })
})


// getting get request
app.get('/', (req, res) => {
    res.status(200).send("this is my home page express app with arnab")
})

app.get('/about', (req, res) => {
    res.send("this is my about page express app with arnab")
})

// getting post request
app.post('/about', (req, res) => {
    res.send("this is my about page express app with arnab  Its a post request") 
})
app.get('/this', (req, res) => {
    res.status(404).send("This page is not found") 
})

//listening to a port
app.listen(port, ()=> {
    console.log(`The application started on port ${port}`)
})


