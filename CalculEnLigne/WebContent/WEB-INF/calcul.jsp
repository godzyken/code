<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>  
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Calculette</title>
</head>
<body>
	<p>BIENVENUE SUR MON SITE DE CALCUL EN LIGNE</p>
	<p>Veuillez saisir un champ a et un champ b pour effectuer un calcul.</p>
	<form method="post" action="Calculette">
		<p>
		<label for="Champ_a">a : </label>
		<input type="text" id="Champ_a" name="Champ_a"/>
		</p>
		<select name="operation" id="operation">
			<option value="addition">+</option>
			<option value="soustraction">-</option>
			<option value="multiplication">*</option>
			<option value="division">/</option>
		</select>
		<p>
		<label for="Champ_b">b : </label>
		<input type="text" id="Champ_b" name="Champ_b"/>
		</p>

		<input type="submit" value="="/>
		<p>
		<label for="Resultat">Resultat : </label>
		<input type="text" id="Resultat" name="Resultat" value="${Resultat}"/>
		</p>
	</form>
		<p>${message}</p>
</body>
</html>