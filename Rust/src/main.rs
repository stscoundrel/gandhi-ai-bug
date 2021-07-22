fn main() {
    // Initial Gandhi aggression is supposedly "1".
    // According to the story, aggression goes from 1 - 12.
    let gandhi_aggression: u8 = 1;

    // Give Gandhi the democracy modifier.
    let gandhi_with_democracy: u8 = gandhi_aggression.wrapping_sub(2);

    println!("----------------------------------------------------------------");
    println!("Gandhi aggression prior to democracy modifier: {}", gandhi_aggression); 
    println!("Democrazy modifier is -2. Add it to Gandhi"); 
    println!("Gandhi aggression after democracy modifier: {}", gandhi_with_democracy); 
    println!("\n");
    println!("Logical value would've been -1, but unsigned 8bit integer overflows to max value"); 
    println!("----------------------------------------------------------------");
}