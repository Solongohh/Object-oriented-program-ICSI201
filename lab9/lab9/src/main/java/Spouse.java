import java.util.Date;

public class Spouse extends Person{
    protected Date AnniversaryDate;

    public Date getAnniversaryDate() {
        return AnniversaryDate;
    }

    public void setAnniversaryDate(Date anniversaryDate) {
        AnniversaryDate = anniversaryDate;
    }

    public Spouse(String name,int age,Date anniversaryDate) {
        setName(name);
        setAge(age);
        AnniversaryDate = anniversaryDate;
    }
    public void showSpouse(){
        System.out.println("spouse name:"+this.getName());
        System.out.println("aniversary date:"+this.getAnniversaryDate());
        System.out.println("spouse age:"+this.getAge());
    }
}
