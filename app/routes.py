from app import app
from flask import render_template

@app.route('/', methods=['GET'])
def index():
	return render_template("base.html", title = "Home")

@app.route('/question_1', methods=['GET'])
def question_1():
	return render_template("question_1.html", title = "Trapping Rainwater")
