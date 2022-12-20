public class Child extends Person{
    protected String FavoriteToy;

    public void setFavoriteToy(String favoriteToy) {
        FavoriteToy = favoriteToy;
    }

    public String getFavoriteToy() {
        return FavoriteToy;
    }

    public Child(String name,String favoriteToy) {
        setName(name);
        FavoriteToy = favoriteToy;
    }
}
