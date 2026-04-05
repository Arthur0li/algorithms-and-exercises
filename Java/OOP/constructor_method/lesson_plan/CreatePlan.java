package constructor_method.lesson_plan;

public class CreatePlan {
    String subject;
    String content;
    String evaluation_criteria;
    String bibliography;

    // Default constructor
    CreatePlan() {}

    // Constructor with parameters
    CreatePlan(String subject, String content, String evaluation_criteria, String bibliography) {
        this.subject = subject;
        this.content = content;
        this.evaluation_criteria = evaluation_criteria;
        this.bibliography = bibliography;
    }

    // Get the bibliography
    public String getBibliography() {
        return bibliography;
    }

    // Get the content
    public String getContent() {
        return content;
    }

    // Get the evaluation criteria
    public String getEvaluation_criteria() {
        return evaluation_criteria;
    }

    // Get the subject
    public String getSubject() {
        return subject;
    }
}