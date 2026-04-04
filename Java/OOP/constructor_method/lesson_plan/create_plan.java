package constructor_method.lesson_plan;

public class create_plan {
    String materia;
    String conteudo;
    String criterio_avaliacao;
    String bibliografia;

    create_plan() {}

    create_plan(String materia, String conteudo, String criterio_avaliacao, String bibliografia){
        this.materia = materia;
        this.conteudo = conteudo;
        this.criterio_avaliacao = criterio_avaliacao;
        this.bibliografia = bibliografia;
    }

    public void setBibliografia(String bibliografia) {
        this.bibliografia = bibliografia;
    }

    public void setConteudo(String conteudo) {
        this.conteudo = conteudo;
    }

    public void setCriterio_avaliacao(String criterio_avaliacao) {
        this.criterio_avaliacao = criterio_avaliacao;
    }

    public void setMateria(String materia) {
        this.materia = materia;
    }

    public String getBibliografia() {
        return bibliografia;
    }

    public String getConteudo() {
        return conteudo;
    }
    public String getCriterio_avaliacao() {
        return criterio_avaliacao;
    }

    public String getMateria() {
        return materia;
    }
}
