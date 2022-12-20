import java.util.Date;
import java.util.Vector;

public class Employee extends Person{
    protected String CompanyId;
    protected String Title;
    protected Date StartDate;
    protected Division division;
    protected Spouse spouse;
    protected Vector<Child> child;
    protected Vector<JobDescription> jobDescription;


    public void setCompanyId(String companyId) {
        CompanyId = companyId;
    }

    public void setTitle(String title) {
        Title = title;
    }

    public void setStartDate(Date startDate) {
        StartDate = startDate;
    }

    public String getCompanyId() {
        return CompanyId;
    }

    public String getTitle() {
        return Title;
    }

    public Date getStartDate() {
        return StartDate;
    }

    public void showSpouse() {
        spouse.showSpouse();
    }

    public void setDivision(Division division){this.division=division;}

    public void setJobDescription(JobDescription jobDescription) {
        this.jobDescription.addElement(jobDescription);
    }
    public void setSpouse(Spouse spouse) {
        this.spouse = spouse;
    }
    public void addJobDescription(JobDescription jobDescription) {
        this.jobDescription.addElement(jobDescription);
    }
    public void addChild(Child child) {
        this.child.addElement(child);
    }
    public Employee(String name1, String SSnum, int age1, String companyId, String title, Date startDate,Division division,JobDescription jobDescription) {
        setName(name1);
        setSSNum(SSnum);
        setAge(age1);
        setCompanyId(companyId);
        setTitle(title);
        setStartDate(startDate);
        this.child = new Vector<Child>();
        this.jobDescription= new Vector<JobDescription>();
        setDivision(division);
        setJobDescription(jobDescription);
    }
    public void showData(){
        this.showPerson();
        System.out.println("CompanyId: "+getCompanyId());
        System.out.println("Title: "+getTitle());
        System.out.println("Start date: "+getStartDate());
        this.showSpouse();
    }
}
