package com.calcul.servlets;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class Calculette extends HttpServlet {
	
	private static final long serialVersionUID = 1L;
    
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Calculette() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {

		this.getServletContext().getRequestDispatcher("/WEB-INF/calcul.jsp").forward(request, response);
	
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		String a = request.getParameter("Champ_a");
		
		String b = request.getParameter("Champ_b");
		
		
		String oper = request.getParameter("operation");
		float res = 0;
		String mess ="";
		
		if(a == "" || b == "") {
			
			mess = "Veuillez saisir tous les champs !";
	
		}else {
			float champA = Float.parseFloat(a);
			float champB = Float.parseFloat(b);
			
			if (oper.equals("addition")) {
				res = champA + champB;
				mess = "Résultat du calcul : " + champA + " + " + champB + " = " + res;
			}
			if (oper.equals("soustraction")) {
				res = champA - champB;
				mess = "Résultat du calcul : " + champA + " - " + champB + " = " + res;
			}
			if (oper.equals("multiplication")) {
				res = champA * champB;
				mess = "Résultat du calcul : " + champA + " * " + champB + " = " + res;
			}
			if (oper.equals("division")) {
				res = champA / champB;
				mess = "Résultat du calcul : " + champA + " / " + champB + " = " + res;
			}
		}

		request.setAttribute("Champ_a", a);
		request.setAttribute("Champ_b", b);
		request.setAttribute("Resultat", res);
		request.setAttribute("message", mess);
		this.getServletContext().getRequestDispatcher("/WEB-INF/calcul.jsp").forward(request, response);
	}

}
