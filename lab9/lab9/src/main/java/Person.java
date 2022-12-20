public class Person {
    protected String name;
    protected String SSNum;
    protected int age;

    public void setName(String name) {
        this.name = name;
    }

    public void setSSNum(String SSNum) {
        this.SSNum = SSNum;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public String getSSNum() {
        return SSNum;
    }

    public int getAge() {
        return age;
    }
    public void showPerson(){
        System.out.println("name: "+getName());
        System.out.println("SSNum: "+getSSNum());
        System.out.println("age: "+getAge());
    }
}
