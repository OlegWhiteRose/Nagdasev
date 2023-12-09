bool CanBePair(const Human::Woman& girl, const Human::Man& boy){
    if(girl.IQ + girl.age < boy.IQ + boy.age){
        return true;
    }
    return false;
}