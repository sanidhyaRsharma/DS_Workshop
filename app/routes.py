from app import app
from flask import render_template

@app.route('/', methods=['GET'])
def index():
	return render_template("base.html", title = "Home", index_active= "active")

@app.route('/question_1', methods=['GET'])
def question_1():
	return render_template("question_1.html", title = "Trapping Rainwater", q1_active="active")

@app.route('/question_2', methods=['GET'])
def question_2():
	return render_template('question_2.html', title = "Maximum Sum sub-array", q2_active="active")