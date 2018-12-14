<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Calculatrice qui déchire</title>
</head>
<body>

	<form method="post" action="calculette">
		<p>
			<input type="number" step="any" name="nb1" id="nb1" /> <select name="operateur">
				<option>+</option>
				<option>-</option>
				<option>x</option>
				<option>/</option>
			</select> <input type="number" step="any" name="nb2" id="nb2" /> <input type="submit"
				value="c'est darty mon kiki!" />
				<p>Le résultat de l'opération ${ nb1 } ${ operateur} ${ nb2 } est égal à ${ resultat }</p>
		
	</form>
	
	 

</body>
</html>