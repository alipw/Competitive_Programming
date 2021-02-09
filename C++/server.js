const express = require('express')
const app = express()
const bodyParser = require('body-parser')
const cors = require('cors');

app.use(bodyParser.json);

app.use(bodyParser,urlencoded({extended : false}));

app.use(cors());

app.get("/test",function(req,res){
	let response = {
		message : "my - FIRST END POINT!",
		method : req.method,
		code : res.statusCode
	}
})

app.listen(process.env.PORT,function(){
	console.log("Server is running on port : " + process.env.PORT)
});