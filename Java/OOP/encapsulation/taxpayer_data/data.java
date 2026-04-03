package encapsulation.taxpayer_data;

public class data {
    /*
    Since the attributes are private, it's not possible to do:
        test1.name = "Arthur";
    
    You have to use `set` and then `get`.
        `set` = changes / writes
        `get` = queries / reads
    */
    private String name;
    private String id;
    private String card;

    public void setName(String name){
        this.name = name;
    }

    public void setId(String id){
        this.id = id;
    }

    public void setCard(String card){
        this.card = card;
    }

    public String getName(){
        return name;
    }

    public String getId(){
        return id;
    }

    public String getCard(){
        return card;
    }
}