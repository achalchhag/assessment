<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<br>
<h2>SignUp Page
</h2>
<nav>
<a href='Home.jsp'>Home</a> ||
<a href='signup.jsp'>Sign-up</a>  ||
<a href='login.jsp'>Login</a>  ||
</nav>
<br>
<br>

<form action="login.jsp">
First Name:<input type="text" Placeholder="Your Name">
<br><br>
Last Name:<input type="text" Placeholder="Last Name">
<br><br>
Email : <input type="email" Placeholder="abc@gmail.com">
<br><br>
Mobile :<input type="text" Placeholder="9898989800">
<br><br>
Address :<input type="text" Placeholder="Your Name">
<br><br>
Gender : Male<input type="radio" name="gender"> Female<input type="radio" name="gender">
<br><br>
Password : <input type="password" Placeholder="password">
<br><br>
Confirm Password : <input type="password" Placeholder="password">
<br><br>
<input type="submit" value="SignUp">
</form>
</body>
</html>