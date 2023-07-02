use rust_cmake::sum;

fn main() {
    unsafe {
        println!("{}", sum(10, 10));
    }
}
