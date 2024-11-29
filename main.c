<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Simple Form</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            padding: 20px;
        }
        h1 {
            color: green;
        }
        .form-group {
            margin-bottom: 15px;
        }
    </style>
</head>
<body>
    <h>Welcome to My Simple Website</h>
    <h1> This is the Master File</h1>
     <h2> The latest feature has been added by feature2 branch</h2>
    <form id="myForm">
        <div class="form-group">
            <label for="name">Enter your name:</label>
            <input type="text" id="name" required>
        </div>
        <div class="form-group">
            <label>Select your favorite color:</label><br>
            <input type="radio" id="red" name="color" value="Red">
            <label for="red">Red</label><br>
            <input type="radio" id="blue" name="color" value="Blue">
            <label for="blue">Blue</label><br>
            <input type="radio" id="green" name="color" value="Green">
            <label for="green">Green</label>
        </div>
        <button type="button" onclick="submitForm()">Submit</button>
    </form>

    <script>
        function submitForm() {
            const name = document.getElementById('name').value;
            const colorChoice = document.querySelector('input[name="color"]:checked');

            if (colorChoice) {
                const color = colorChoice.value;
                const newWindow = window.open("", "_blank");
                newWindow.document.write(`
                    <!DOCTYPE html>
                    <html lang="en">
                    <head>
                        <meta charset="UTF-8">
                        <meta name="viewport" content="width=device-width, initial-scale=1.0">
                        <title>Your Submission</title>
                        <style>
                            body {
                                font-family: Arial, sans-serif;
                                padding: 20px;
                            }
                            h1 {
                                color: green;
                            }
                        </style>
                    </head>
                    <body>
                        <h1>${name}</h1>
                        <p>This is my HTML, CSS, and JavaScript code.</p>
                        <p>I am very happy with my first code.</p>
                    </body>
                    </html>
                `);
                newWindow.document.close();
            } else {
                alert("Please select a color option.");
            }
        }
    </script>
</body>
</html>

