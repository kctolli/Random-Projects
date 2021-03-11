class MusicPlayer {
    private var songs: Array<String> = arrayOf()
    //your code goes here
    fun add(track : String){
    songs += track
    } 

    fun show(){
    for (element in songs) {
        println(element)
    }}

    fun play(){
    println("Playing "+songs[0])
    }
}
fun main(args: Array<String>) {
    val m = MusicPlayer()
    
    while(true) {
        var input = readLine()!!
        if(input == "stop") {
            break
        }
        m.add(input)
    }
    m.show()
    m.play()
}