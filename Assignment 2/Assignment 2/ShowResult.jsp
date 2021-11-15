<%@ page import = "java.sql.*"%>
<!Doctype html>
<html>
<head>
    <title>Student Result</title>
</head>
<body>
    <table>
    <%
        response.setContentType("text/html");
        StringBuilder sb = new StringBuilder("");
        try
        {    
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/mydatabase1","root","root");  
            Statement stmt=con.createStatement();
            ResultSet rs=stmt.executeQuery("select * from student_Result");
            sb.append("<tr>" +
                            "<th>ID</th>" +
                            "<th>Name</th>" +
                            "<th>J2EE Marks</th>" +
                            "<th>Big Data Marks</th>" +
                            "<th>AI Marks</th>" +
                            "<th>IT Management Marks</th>" +
                            "<th>ML Marks</th>" +
                            "<th>Data structure Marks</th>" +
                       "</tr>"); 
            while(rs.next())
            {
                sb.append("<tr>" +
                              "<td>" + rs.getInt(1) + "</td>" + 
                              "<td>" + rs.getString(2) + "</td>" +
                              "<td>" + rs.getInt(3) + "</td>" +
                              "<td>" + rs.getInt(4) + "</td>" +
                              "<td>" + rs.getInt(5) + "</td>" +
                              "<td>" + rs.getInt(6) + "</td>" +
                              "<td>" + rs.getInt(7) + "</td>" +
                              "<td>" + rs.getInt(8) + "</td>" +
                          "</tr>");
            }
            con.close();  
        }
        catch(Exception e)
        {
            out.println("Error Occured : " + e);
        }  
        out.println(sb);
    %>
    </table>
    </div>
</body>
</html>