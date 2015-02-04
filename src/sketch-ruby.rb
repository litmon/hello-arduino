require 'dino'

board = Dino::Board.new(Dino::TxRx.new)
led = Dino::Components::Led.new(pin: 13, board: board)
button = Dino::Components::Button.new(pin: 7, board: board)

sleep 0.1
led.off

button.up do
  led.send(:off)
end
button.down do
  led.send(:on)
end

sleep
