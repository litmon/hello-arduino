require 'dino'

board = Dino::Board.new(Dino::TxRx.new)
led = Dino::Components::Led.new(pin: 13, board: board)
button = Dino::Components::Button.new(pin: 7, board: board)

button.up do
  led.send(:off)
end
button.down do
  led.send(:on)
end

sleep
