fun main(args: Array<String>) {
    val (w, h, x, y) = readLine()!!.split(" ").map{ it.toInt()}
    val a = if( w / x == 2 && h / y == 2 ) 1 else 0
    println( (w * h / 2.0).toString() + " "  + a )
}
