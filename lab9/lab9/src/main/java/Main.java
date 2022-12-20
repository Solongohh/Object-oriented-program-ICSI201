import java.util.Date;
public class Main{
    public static void main(String[] args) {
        Division IS = new Division("Information system");
        Division CS = new Division("Computer science");

        JobDescription AI = new JobDescription("AI engineer");
        JobDescription SA = new JobDescription("Systems architect");

        Spouse Sender = new Spouse("Sender", 20, new Date(2022, 05, 12));
        Spouse Soylnym = new Spouse("Soylnym", 20, new Date(2012, 12, 31));

        Child Binderya = new Child("Binderya", "mobile legends");
        Child Duulim = new Child("Duulim", "genshin");

        Employee Bilguun = new Employee("Bilguun", "TSE02", 20, "30v0719", "microsoft", new Date(2020, 12, 30), CS, AI);
        Bilguun.setDivision(CS);
        Bilguun.addJobDescription(SA);
        Bilguun.setSpouse(Sender);
        Bilguun.addChild(Binderya);
        Employee Enkhmunkh = new Employee("Enkhmunkhh", "HS15", 21, "31g3679", "google", new Date(2022, 3, 12), IS, SA);
        Enkhmunkh.setDivision(IS);
        Enkhmunkh.setSpouse(Soylnym);
        Enkhmunkh.setJobDescription(AI);
        Enkhmunkh.addChild(Duulim);
        Bilguun.showData();
        Enkhmunkh.showData();
    }
}